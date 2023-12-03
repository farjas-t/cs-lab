import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class RectangleApplet extends Applet {

    private int x, y, width, height;
    private Color color;

    @Override
    public void init() {
        // Get parameters from the HTML file
        String xParam = getParameter("x");
        String yParam = getParameter("y");
        String widthParam = getParameter("width");
        String heightParam = getParameter("height");
        String colorParam = getParameter("color");

        // Parse parameters
        x = Integer.parseInt(xParam);
        y = Integer.parseInt(yParam);
        width = Integer.parseInt(widthParam);
        height = Integer.parseInt(heightParam);
        color = Color.decode(colorParam);
    }

    @Override
    public void paint(Graphics g) {
        // Set the color
        g.setColor(color);

        // Draw the rectangle
        g.fillRect(x, y, width, height);
    }
}
