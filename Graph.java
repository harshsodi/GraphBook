import java.util.*;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.util.Random;

class Canv extends Canvas implements MouseMotionListener, MouseWheelListener{

	private int scale;
	private int alignX;
	private int alignY;
	private ArrayList<Equation> equationList = new ArrayList<Equation>();
	private java.awt.Color[] colors = new java.awt.Color[10];
	
	public Canv () {
         setBackground(Color.WHITE);
         setSize(new Dimension(1000, 600));
         
         colors[0] = new Color(70,122,186) ;
         colors[1] = new Color(240,87,87) ;
         colors[2] = new Color(51,163,107) ;
         colors[3] = new Color(119,87,145) ;
         colors[4] = new Color(243,139,55) ;
         colors[5] = new Color(196,105,155) ;
         colors[6] = new Color(102,236,176) ;
         scale=50;
         
         addMouseWheelListener(this);
         addMouseMotionListener(this);
         
         alignX = 0;
         alignY = 0;
    }
    
    public void setScale(int scale) {
		this.scale = scale;
    }
    
    public int getScale() {
		return this.scale;
    }
    
    public void addEquation(Equation eq) {
		equationList.add(eq);
    }
    
    
     // And two methods from MouseMotionListener:
    private int mouseX;
    private int mouseY;
	public void mouseMoved(MouseEvent e) {
		mouseX = e.getX();
		mouseY = e.getY();
	}

	public void mouseDragged(MouseEvent e) {
		alignX = alignX + (e.getX()-mouseX);
		alignY = alignY + (e.getY()-mouseY);
		mouseX = e.getX();
		mouseY = e.getY();
		repaint();
	}

	public void mouseWheelMoved(MouseWheelEvent e) {
       int notches = e.getWheelRotation();
       int newScale;
       if (notches < 0) {
				newScale = getScale()+5;
				setScale(newScale);
				repaint();	
       } 
       else {
			if(getScale() > 5) {
				newScale = getScale()-5;
				setScale(newScale);
				repaint();
			}
       }
    }

    private int col;
    
	public void paint(Graphics g2) {
		Graphics2D g = (Graphics2D)g2;
		col = 0;
		
		//draw grid and axis
		double gf = 0.0;
		int gi;
		double part = scale/5;
		g.setColor(Color.LIGHT_GRAY);
		
// 		for(gf=500.0 ;  gf <= 1000 ;gf += part) {
// 			g.drawLine((int)gf,0,(int)gf,600);
// 			g.drawLine(500-((int)gf-500),0,500-((int)gf-500),600);	
// 		}
// 		for(gf=300.0 ;  gf <= 600 ;gf += part) {
// 			g.drawLine(0,(int)gf,1000,(int)gf);
// 			g.drawLine(0,300-((int)gf-300),1000,300-((int)gf-300));
// 		}

		// origin = 500 + alignX .. draw from origin to boundaries
		for(gf=500.0 + (double)alignX; gf <= 1000; gf += part) {
			g.drawLine((int)gf,0,(int)gf,600);
		}
		for(gf=500.0 + (double)alignX; gf >= 0; gf -= part) {
			g.drawLine((int)gf,0,(int)gf,600);
		}
		for(gf=300.0 + (double)alignY; gf <= 600; gf += part) {
			g.drawLine(0,(int)gf,1000,(int)gf);
		}
		for(gf=300.0 + (double)alignY; gf >= 0; gf -= part) {
			g.drawLine(0,(int)gf,1000,(int)gf);
		}
		
		g.setStroke(new BasicStroke(1.5f));
		for(gi=0;gi<1000;gi++) {
			if((500-gi+alignX)%scale == 0 && gi != 500) {
				int harsh = (500-gi+alignX)/scale*-1;
				String lab = Integer.toString(harsh);
				g.drawLine(gi,0,gi,600);
				
				g.setColor(Color.BLACK);
				Font font = new Font ("Courier New", 1, 17); //Initializes the font
				g.setFont (font); //Sets the font
				g.drawString(lab, gi-5 , 315+alignY);
				g.setColor(Color.LIGHT_GRAY);
			}
		}
		for(gi=0;gi<600;gi++) {
			if((300-gi+alignY)%scale == 0  && gi != 300) {
				
				int harsh = (300-gi+alignY)/scale;
				String lab = Integer.toString(harsh);
				
				
				g.drawLine(0,gi,1000,gi);
				
				if(harsh != 0) {
					g.setColor(Color.BLACK);
					Font font = new Font ("Courier New", 1, 17); //Initializes the font
					g.setFont (font); //Sets the font
					g.drawString(lab, 500+alignX , gi+5);
					g.setColor(Color.LIGHT_GRAY);
				}
			}
		}
		
		g.setStroke(new BasicStroke(1.5f));
		g.setColor(Color.GRAY);
		g.drawLine(500+alignX,0,500+alignX,600);
		g.drawLine(0,300+alignY,1000,300+alignY);
		
		
		g.drawString(alignX + " : " + alignY, 10 , 10);
		
		//plot graphs
		Iterator itr = equationList.iterator();
		Test t = new Test(scale);
		g.setStroke(new BasicStroke(2.0f));
		while(itr.hasNext()) {
			double[] d = t.getMF((Equation)itr.next(), alignX, alignY);
			g.setColor(colors[col++]);
			if(col>6) {
				col = 0;
			}
			int x;
			for(x=0;x<999;x++) {
				if(!(d[x] == 0 && d[x+1] == 0) ) {
					g.drawLine(x,(-1)*(int)(d[x]*scale)+300+alignY,x+1,(-1)*(int)(d[x+1]*scale)+300+alignY);
				}
			}
		}
	}
}

class frame extends Frame implements ActionListener {

	Canv can = new Canv();
	Panel controls = new Panel();
	TextField t = new TextField();
	Button b = new Button("Plot");
		
	public frame(String title, int width, int height) 
    {
		super(title);
		setSize(width,height);
		addWindowListener(new WindowAdapter() {
			  public void windowClosing(WindowEvent we) {
			      setVisible(false);
			      System.exit(1);
			  }
		});
		
		
		
		controls.setLayout(new GridLayout(10,1));
		controls.setSize(500,300);
		controls.add(t);
		controls.add(b);
		b.addActionListener(this);
      
		setBackground(Color.WHITE); 
		
		Button B1 = new Button("NE");
		Button B2 = new Button("SouthWest");
		GridBagLayout gridbag;
		gridbag = new GridBagLayout();
		GridBagConstraints c = new GridBagConstraints();
		setLayout(gridbag);
		c.weightx = 2;
		c.weighty = 1;
		c.gridx = 0;
		c.gridy = 0;
		c.anchor = GridBagConstraints.SOUTHWEST;
		gridbag.setConstraints(B1,c);
		B1.setBackground(Color.cyan);
		add(can);
		
		c.weightx = 2;
		c.gridx = 1;
		c.anchor = GridBagConstraints.NORTH;
		c.fill = GridBagConstraints.BOTH;
		gridbag.setConstraints(controls,c);
    
		B2.setBackground(Color.pink);
		add(controls);	
				
	}
	
	public void actionPerformed(ActionEvent ae) {
		if(ae.getActionCommand().equals("Plot")) {
			String text = t.getText();
			Equation eq = new Equation(text);
			can.addEquation(eq);
			can.repaint();
			System.out.println(Color.RED.getClass());
		}
	}	            
}

public class Graph {
	public static void main(String args[]) {
		frame f = new frame("Sodi",1500,600);
		f.setVisible(true);
	}
}