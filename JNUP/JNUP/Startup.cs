using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(JNUP.Startup))]
namespace JNUP
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
